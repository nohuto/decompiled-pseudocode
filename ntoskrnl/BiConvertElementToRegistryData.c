/*
 * XREFs of BiConvertElementToRegistryData @ 0x14082F9BC
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140A59C10 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        wchar_t **a5,
        unsigned int *a6)
{
  size_t v6; // r14
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // r15d
  wchar_t *Buffer; // rsi
  int v15; // eax
  int v16; // edi
  unsigned int *v17; // rbx
  wchar_t *v18; // rax
  char v19; // bl
  wchar_t *Pool2; // rax
  unsigned int v22; // eax
  _WORD *v23; // rcx
  unsigned int v24; // r14d
  int v25; // r15d
  unsigned int v26; // ebx
  __int64 v27; // rax
  _WORD *v28; // r13
  unsigned int v29; // eax
  size_t v30; // rbx
  int v31; // ecx
  wchar_t *v32; // rax
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+70h] [rbp+30h]

  v6 = a3;
  Src = 0LL;
  DestinationString = 0LL;
  v8 = (HIBYTE(a1) & 0xF) - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( (a3 & 1) != 0 )
        return (unsigned int)-1073741788;
      v19 = 0;
      v22 = a3 >> 1;
      v23 = a2;
      if ( a3 >> 1 )
      {
        while ( *v23 )
        {
          ++v23;
          if ( !--v22 )
            goto LABEL_51;
        }
        v19 = 1;
        v13 = a3;
      }
      else
      {
LABEL_51:
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v13 = a3 + 2;
      }
      Pool2 = (wchar_t *)ExAllocatePool2(258LL, v13, 1262764866LL);
      Buffer = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a2, v6);
        if ( !v19 )
          *(wchar_t *)((char *)Buffer + v13 - 2) = 0;
        goto LABEL_20;
      }
      goto LABEL_46;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v13 = 8;
          if ( a3 == 8 )
          {
            Buffer = (wchar_t *)ExAllocatePool2(258LL, 8LL, 1262764866LL);
            if ( Buffer )
            {
              *(_QWORD *)Buffer = *a2;
LABEL_20:
              v16 = 0;
              *a5 = Buffer;
              *a6 = v13;
              goto LABEL_21;
            }
            goto LABEL_46;
          }
          return (unsigned int)-1073741788;
        }
        v31 = v12 - 1;
        if ( !v31 )
        {
          if ( a3 - 1 <= 1 )
          {
            v13 = 1;
            Buffer = (wchar_t *)ExAllocatePool2(258LL, 1LL, 1262764866LL);
            if ( Buffer )
            {
              *(_BYTE *)Buffer = *(_BYTE *)a2 != 0;
              goto LABEL_20;
            }
            goto LABEL_46;
          }
          return (unsigned int)-1073741788;
        }
        if ( v31 == 1 && (a3 & 7) != 0 )
          return (unsigned int)-1073741788;
        v13 = a3;
        v32 = (wchar_t *)ExAllocatePool2(258LL, a3, 1262764866LL);
        Buffer = v32;
        if ( v32 )
        {
          memmove(v32, a2, v6);
          goto LABEL_20;
        }
      }
      else
      {
        if ( (a3 & 0xF) != 0 )
          return (unsigned int)-1073741788;
        v24 = a3 >> 4;
        v25 = 0;
        v26 = 0;
        if ( a3 >> 4 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            v16 = RtlStringFromGUIDEx((unsigned int *)&a2[2 * v26], (__int64)&DestinationString, 1);
            if ( v16 < 0 )
              goto LABEL_21;
            v25 += DestinationString.Length + 2;
            RtlFreeUnicodeString(&DestinationString);
          }
          while ( ++v26 < v24 );
        }
        v13 = v25 + 2;
        v27 = ExAllocatePool2(258LL, v13, 1262764866LL);
        Buffer = (wchar_t *)v27;
        if ( v27 )
        {
          v28 = (_WORD *)v27;
          v35 = 0;
          v29 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              v16 = RtlStringFromGUIDEx((unsigned int *)&a2[2 * v29], (__int64)&DestinationString, 1);
              if ( v16 < 0 )
                break;
              v30 = (unsigned int)DestinationString.Length + 2;
              memmove(v28, DestinationString.Buffer, v30);
              v28 = (_WORD *)((char *)v28 + v30);
              RtlFreeUnicodeString(&DestinationString);
              v29 = v35 + 1;
              v35 = v29;
              if ( v29 >= v24 )
                goto LABEL_37;
            }
            ExFreePoolWithTag(Buffer, 0x4B444342u);
            goto LABEL_21;
          }
LABEL_37:
          *v28 = 0;
          goto LABEL_20;
        }
      }
LABEL_46:
      v16 = -1073741801;
      goto LABEL_21;
    }
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v16 = RtlStringFromGUIDEx((unsigned int *)a2, (__int64)&DestinationString, 1);
    if ( v16 >= 0 )
    {
      Buffer = DestinationString.Buffer;
      v13 = DestinationString.Length + 2;
      goto LABEL_20;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 == 6 )
      v15 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v15 = BiConvertNtDeviceToBootEnvironment(a2, a3, a4, &Src);
    v16 = v15;
    if ( v15 < 0 )
      goto LABEL_21;
    v17 = (unsigned int *)Src;
    v13 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
    {
      v18 = (wchar_t *)ExAllocatePool2(258LL, (unsigned int)(*((_DWORD *)Src + 2) + 16), 1262764866LL);
      Buffer = v18;
      if ( v18 )
      {
        *(_OWORD *)v18 = *(_OWORD *)((char *)a2 + 4);
        memmove(v18 + 8, v17, v17[2]);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0x4B444342u);
          Src = 0LL;
        }
        goto LABEL_20;
      }
      goto LABEL_46;
    }
    v16 = -1073741811;
  }
LABEL_21:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v16;
}
