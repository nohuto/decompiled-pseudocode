/*
 * XREFs of sub_18012E7B0 @ 0x18012E7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012E7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
  {
    v9 = -2147467263;
LABEL_9:
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v14) = v9;
      v13 = (__int64)"CAPOWrapperSrv::GetEffectsList";
      LODWORD(v12) = 351;
      sub_180109778(
        (__int64)&dword_18019C4B8,
        byte_18016C251,
        a3,
        a4,
        (const CHAR **)&v13,
        (__int64)&v12,
        (__int64)&v14);
    }
    return (unsigned int)v9;
  }
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 88);
    if ( v10 && v10 != -1 )
    {
      CloseHandle(*(HANDLE *)(a1 + 88));
      v6 = *(_QWORD *)(a1 + 80);
    }
    *(_QWORD *)(a1 + 88) = a4;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3, a4);
  if ( v9 < 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
