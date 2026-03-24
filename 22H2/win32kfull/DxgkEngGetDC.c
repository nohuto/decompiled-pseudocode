/*
 * XREFs of DxgkEngGetDC @ 0x1C02772D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

HDC __fastcall DxgkEngGetDC(__int64 a1, __int64 *a2)
{
  HDC DC; // rax
  HDC v4; // rdi
  __int64 *v6; // rsi
  __int64 DisplayDC; // rax
  __int64 v8; // rbp
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = (HDC)NtUserGetDC();
  v4 = DC;
  if ( !DC )
    return 0LL;
  if ( a2 )
  {
    MDCOBJA::MDCOBJA((MDCOBJA *)&v9, DC);
    v6 = v9;
    if ( v9 )
    {
      DisplayDC = GreCreateDisplayDC(v9[6], 0LL);
      v10 = 0;
      *a2 = DisplayDC;
      v8 = *v6;
      HmgDecrementShareReferenceCountEx(v6, &v10);
      if ( v10 )
        bDeleteDCInternalEx(v8, 0LL);
    }
    if ( !*a2 )
    {
      UserReleaseDC(v4);
      return 0LL;
    }
  }
  return v4;
}
