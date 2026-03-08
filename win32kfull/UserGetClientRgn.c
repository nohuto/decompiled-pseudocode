/*
 * XREFs of UserGetClientRgn @ 0x1C01BEF48
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010D9A8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

HRGN __fastcall UserGetClientRgn(int a1, _OWORD *a2, int a3)
{
  const struct tagWND *v5; // rax
  const struct tagWND *v6; // rbx
  unsigned int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, v5, v5, v7);
    *a2 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
  }
  return v9;
}
