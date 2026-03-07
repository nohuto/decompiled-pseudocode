__int64 __fastcall BiConvertRegistryDataToElement(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        __int16 a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  const WCHAR *v8; // r15
  unsigned int v9; // edi
  unsigned int v12; // esi
  char v13; // r12
  __int64 v14; // rbx
  NTSTATUS v15; // ebx
  GUID *v17; // rdi
  GUID *v18; // rcx
  void *v19; // rcx
  __int64 v20; // r9
  __int16 v21; // r12
  int v22; // eax
  PVOID v23; // rdi
  GUID *v24; // rbx
  GUID *v25; // rcx
  GUID *v26; // r12
  unsigned int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rdx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v7 = a7;
  v8 = (const WCHAR *)a2;
  v9 = a3;
  P = 0LL;
  LODWORD(Size) = 0;
  v12 = 0;
  DestinationString = 0LL;
  switch ( HIBYTE(a4) & 0xF )
  {
    case 1:
      if ( (unsigned int)a3 < 0x1C )
      {
        BiLogMessage(
          4LL,
          L"Insufficient length for BCD element. Length %lu Required %lu DataType: %lu",
          (unsigned int)a3,
          28LL,
          a4);
        return (unsigned int)-1073741788;
      }
      v19 = a2 + 4;
      v20 = a2[6] + 16LL;
      if ( v20 != (unsigned int)a3 )
      {
        BiLogMessage(
          4LL,
          L"Unexpected length for BCD element. Length %lu Expected: %lu DataType: %lu",
          (unsigned int)a3,
          v20,
          a4);
        return (unsigned int)-1073741788;
      }
      v21 = a5;
      if ( (a5 & 1) != 0 )
      {
        v22 = BiConvertBootEnvironmentDeviceToQualifiedPartition(v19, &P, &Size);
      }
      else if ( (a5 & 2) != 0 )
      {
        v22 = BiConvertBootEnvironmentDeviceToUnknown(v19);
      }
      else
      {
        v22 = BiConvertBootEnvironmentDeviceToNt(v19, (__int64)&Size);
      }
      v15 = v22;
      if ( v22 >= 0 )
      {
        v23 = P;
        if ( *(_DWORD *)P == 8 )
        {
          if ( (v21 & 0x100) != 0 )
          {
            BiLogMessage(4LL, L"BCD resolve locate not supported. Status: %x", 3221225659LL);
            v23 = P;
          }
          else
          {
            if ( (int)BiResolveLocateDevice(a1, P) >= 0 )
            {
              v29 = *((unsigned int *)P + 6);
              LODWORD(Size) = Size - v29;
              memmove(P, (char *)P + v29, (unsigned int)Size);
            }
            v23 = P;
          }
        }
        if ( (unsigned int)Size <= *v7 )
        {
          v24 = Guid;
          memmove(Guid, v23, (unsigned int)Size);
          *(GUID *)&v24->Data2 = *(GUID *)v8;
          ExFreePoolWithTag(v23, 0x4B444342u);
          v15 = 0;
        }
        else
        {
          v15 = -1073741789;
          ExFreePoolWithTag(v23, 0x4B444342u);
        }
        goto LABEL_30;
      }
      break;
    case 2:
      if ( (_DWORD)a3 && (a3 & 1) == 0 )
      {
        v13 = 0;
        v12 = a3;
        v14 = (unsigned int)a3;
        if ( *(_WORD *)((char *)a2 + (unsigned int)a3 - 2) )
        {
          v9 = a3 + 2;
          v13 = 1;
          v12 = a3 + 2;
        }
        if ( v9 > *a7 )
          goto LABEL_8;
        v17 = Guid;
        memmove(Guid, a2, (unsigned int)a3);
        if ( v13 )
          *(_WORD *)((char *)&v17->Data1 + v14) = 0;
LABEL_13:
        v15 = 0;
        goto LABEL_9;
      }
      goto LABEL_43;
    case 3:
      v12 = 16;
      LODWORD(Size) = 16;
      if ( *a7 < 0x10 )
        goto LABEL_8;
      if ( (unsigned int)a3 < 2 || (a3 & 1) != 0 )
        goto LABEL_43;
      *((_WORD *)a2 + ((unsigned __int64)(unsigned int)a3 >> 1) - 1) = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
      v15 = RtlGUIDFromString(&DestinationString, Guid);
      if ( v15 >= 0 )
      {
        v15 = 0;
LABEL_30:
        v12 = Size;
        goto LABEL_9;
      }
      break;
    case 4:
      v26 = Guid;
      v27 = 0;
      v15 = 0;
      if ( (unsigned int)a3 >= 2 && (a3 & 1) == 0 )
      {
        *((_WORD *)a2 + ((unsigned __int64)(unsigned int)a3 >> 1) - 1) = 0;
        if ( *(_WORD *)a2 )
        {
          do
          {
            if ( v27 >= v9 )
              break;
            v12 += 16;
            LODWORD(Size) = v12;
            if ( v12 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v8);
              v15 = RtlGUIDFromString(&DestinationString, v26);
              if ( v15 < 0 )
                goto LABEL_37;
              v12 = Size;
              ++v26;
            }
            v28 = -1LL;
            do
              ++v28;
            while ( v8[v28] );
            v27 += 2 * v28 + 2;
            v8 += (unsigned int)(v28 + 1);
          }
          while ( *v8 );
        }
        if ( v12 > *v7 )
          v15 = -1073741789;
        goto LABEL_9;
      }
LABEL_43:
      BiLogMessage(4LL, L"String not multiple of WCHAR. Length %lu DataType: %lu", (unsigned int)a3);
      return (unsigned int)-1073741788;
    default:
      switch ( HIBYTE(a4) & 0xF )
      {
        case 5:
          v12 = 8;
          if ( (unsigned int)a3 > 8 )
          {
            BiLogMessage(
              4LL,
              L"Exceeded length for BCD element. Length %lu Expected: %lu DataType: %lu",
              (unsigned int)a3,
              8LL,
              a4);
            return (unsigned int)-1073741788;
          }
          if ( *a7 >= 8 )
          {
            v25 = Guid;
            *(_QWORD *)&Guid->Data1 = 0LL;
            goto LABEL_48;
          }
          break;
        case 6:
          if ( (_DWORD)a3 == 1 )
          {
            v12 = 2;
            if ( *a7 >= 2 )
            {
              v18 = Guid;
              v15 = 0;
              BYTE1(Guid->Data1) = 0;
              LOBYTE(v18->Data1) = *(_BYTE *)a2 != 0;
              goto LABEL_9;
            }
            break;
          }
          BiLogMessage(
            4LL,
            L"Unexpected length for BCD element. Length %lu Expected: %lu DataType: %lu",
            (unsigned int)a3);
          return (unsigned int)-1073741788;
        case 7:
          if ( !(_DWORD)a3 || (a3 & 7) != 0 )
          {
            a3 = (unsigned int)a3;
LABEL_42:
            BiLogMessage(4LL, L"Unexpected length for BCD element. Length %lu DataType: %lu", a3);
            return (unsigned int)-1073741788;
          }
          v12 = a3;
          if ( *a7 >= (unsigned int)a3 )
            goto LABEL_47;
          break;
        default:
          if ( !(_DWORD)a3 )
            goto LABEL_42;
          v12 = a3;
          if ( (unsigned int)a3 <= *a7 )
          {
LABEL_47:
            v25 = Guid;
LABEL_48:
            memmove(v25, a2, (unsigned int)a3);
            goto LABEL_13;
          }
          break;
      }
LABEL_8:
      v15 = -1073741789;
LABEL_9:
      *v7 = v12;
      return (unsigned int)v15;
  }
LABEL_37:
  v12 = Size;
  if ( v15 == -1073741789 )
    goto LABEL_9;
  return (unsigned int)v15;
}
