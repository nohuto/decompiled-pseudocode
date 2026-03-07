__int64 __fastcall PiSwBusRelationAdd(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rdi
  signed int v9; // ebx
  _WORD *v10; // rax
  _QWORD *inserted; // rax
  __int64 *v12; // rdx
  char *v13; // rax
  _OWORD Buffer[2]; // [rsp+40h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+B0h] [rbp+50h] BYREF
  PVOID P; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  NewElement = 0;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)pszSrc,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Start,
      a3,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      pszSrc);
  v5 = PnpAllocatePWSTR(pszSrc, 0xC8uLL, 0x57706E50u, &P);
  v8 = P;
  v9 = v5;
  if ( v5 >= 0 )
  {
    v9 = 0;
    if ( P )
    {
      v10 = P;
      v6 = 0x7FFFLL;
      v7 = 2LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v6;
      }
      while ( v6 );
      v9 = v6 == 0 ? 0xC000000D : 0;
      if ( v6 )
      {
        *((_QWORD *)&Buffer[0] + 1) = P;
        LOWORD(Buffer[0]) = 2 * (0x7FFF - v6);
        WORD1(Buffer[0]) = LOWORD(Buffer[0]) + 2;
      }
    }
    if ( v9 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          P = 0LL;
          inserted[3] = inserted + 2;
          inserted[2] = inserted + 2;
        }
        *(_QWORD *)(a2 + 112) = inserted;
        v6 = a2 + 96;
        v12 = (__int64 *)inserted[3];
        v13 = (char *)(inserted + 2);
        if ( (char *)*v12 != v13 )
          __fastfail(3u);
        *(_QWORD *)v6 = v13;
        *(_QWORD *)(a2 + 104) = v12;
        *v12 = v6;
        *((_QWORD *)v13 + 1) = v6;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v8 = P;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x57706E50u);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v6,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Stop,
      v7,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      pszSrc,
      v9);
  return (unsigned int)v9;
}
