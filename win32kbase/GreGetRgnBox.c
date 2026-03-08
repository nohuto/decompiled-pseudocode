/*
 * XREFs of GreGetRgnBox @ 0x1C00A70C0
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C0008AB0 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C01977C0 (EngGetRgnBox.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 1, 0);
  v4 = v8[0];
  if ( a2 && v8[0] )
  {
    v5 = (_DWORD *)(v8[0] + 52LL);
    *(_OWORD *)a2 = *(_OWORD *)(v8[0] + 56LL);
    if ( *v5 == 1 )
    {
      *(_DWORD *)a2 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      v6 = v4 + 48;
      if ( !v4 )
        v6 = 24LL;
      LOBYTE(v3) = *(_DWORD *)v6 > 0x38u;
      v3 += 2;
    }
  }
  if ( !v9 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v8);
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  return v3;
}
