/*
 * XREFs of ?MulRenderHint@@YAJPEAUDHPDEV__@@K_KPEAX@Z @ 0x1C02B2920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulRenderHint(struct DHPDEV__ *a1, unsigned int a2, __int64 a3, __int64 **a4)
{
  _QWORD *v4; // rbx
  int v8; // esi
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64, __int128 *); // r11
  __int128 *v12; // r9
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD **)a1;
  v8 = 0;
  v9 = -1073741822;
  while ( v4 )
  {
    v10 = v4[6];
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))(v10 + 3408);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v10 + 1792) & 0x8000000) != 0 )
      {
        v12 = (__int128 *)a4;
      }
      else
      {
        if ( v8 )
          goto LABEL_11;
        v16 = 0LL;
        v12 = (__int128 *)a4;
        v15 = 0LL;
        v8 = 1;
        if ( a2 - 65542 <= 1 && *((_WORD *)*a4 + 38) == 3 )
        {
          v13 = **a4;
          v12 = &v15;
          *(_QWORD *)&v15 = **(_QWORD **)(v13 + 8);
          *((_QWORD *)&v15 + 1) = *(_QWORD *)(**(_QWORD **)(v13 + 8) + 8LL);
          v16 = a4[2];
        }
      }
      v9 = v11(*(_QWORD *)(v10 + 1768), a2, a3, v12);
    }
    else
    {
      v9 = -1073741822;
    }
LABEL_11:
    v4 = (_QWORD *)*v4;
  }
  return v9;
}
