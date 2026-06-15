/*
 * XREFs of sub_1800678B0 @ 0x1800678B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B9410 @ 0x1800B9410 (sub_1800B9410.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_1800678B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  char v7; // si
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  int v13; // [rsp+30h] [rbp-48h] BYREF
  RPC_STATUS Status; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-40h] BYREF
  int *v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v2 = 0;
  Status = 0;
  if ( !a2 )
    return 13LL;
  if ( *(_DWORD *)(a2 + 16) == 4 && UuidEqual((UUID *)a2, (UUID *)&GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v6 = *(_DWORD *)(a2 + 20);
    v7 = -1;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 31LL, &unk_18016D4B0, v6);
    }
    if ( v6 )
    {
      if ( v6 - 1 <= 1 )
        v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    if ( qword_18019EED8 )
    {
      LOBYTE(v5) = v7;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EED8 + 16LL))(qword_18019EED8, v5);
    }
  }
  else if ( *(_DWORD *)(a2 + 16) == 4 && UuidEqual((UUID *)a2, (UUID *)&Uuid2, &Status) )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 32LL, &unk_18016D4B0, *(unsigned int *)(a2 + 20));
    }
    LOBYTE(v9) = *(_DWORD *)(a2 + 20) != 0;
    return (unsigned int)sub_1800B9410(a1, v9);
  }
  else
  {
    v10 = *(_QWORD *)a2 - 0x470FEAA4E1233993LL;
    if ( *(_QWORD *)a2 == 0x470FEAA4E1233993LL )
      v10 = *(_QWORD *)(a2 + 8) - 0x71FBB6C151A3E79DLL;
    if ( !v10 && *(_DWORD *)(a2 + 16) == 4 )
    {
      EnterCriticalSection(&stru_18019EF60);
      memcpy(&v13, (const void *)(a2 + 20), *(unsigned int *)(a2 + 16));
      dword_18019E5E4 = v13 != 0;
      v12 = (_DWORD *)sub_180008448(v11, sub_1800B6240)[1];
      if ( *v12 > 4u )
      {
        v13 = dword_18019E5E4;
        v17 = 4LL;
        v16 = &v13;
        sub_1800521E8((__int64)v12, byte_1801661DC, 0LL, 0LL, 3, (__int64)v15);
      }
      LeaveCriticalSection(&stru_18019EF60);
    }
  }
  return v2;
}
