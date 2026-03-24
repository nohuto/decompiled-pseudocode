/*
 * XREFs of SetDesktopPattern @ 0x1C0026030
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C00261A4 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1C01369E0 (RecolorDeskPattern.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C0222F7C (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v6; // rcx
  wchar_t v8; // ax
  __int128 *v9; // r9
  __int64 v10; // r10
  __int16 v11; // r8
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  HBITMAP Bitmap; // rax
  __int128 v15; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v17[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset(v17, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &word_1C02E497C, v17, 260, 0) )
      return v4;
    a2 = v17;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v17[0] && _wcsicmp(a2, Str2) )
  {
    v8 = *a2;
    v9 = &v15;
    v15 = 0LL;
    v10 = 8LL;
    do
    {
      v11 = 0;
      v12 = v8;
      if ( v8 )
      {
        v13 = v8;
        do
        {
          if ( v13 >= 0x30u )
          {
            v12 = v13;
            if ( v13 <= 0x39u )
              break;
          }
          v8 = *++a2;
          v13 = *a2;
          v12 = *a2;
        }
        while ( *a2 );
      }
      if ( v12 >= 0x30u )
      {
        do
        {
          if ( v12 > 0x39u )
            break;
          ++a2;
          v11 = v12 + 2 * (5 * v11 - 24);
          v8 = *a2;
          v12 = *a2;
        }
        while ( *a2 >= 0x30u );
      }
      *(_WORD *)v9 = v11;
      v9 = (__int128 *)((char *)v9 + 2);
      --v10;
    }
    while ( v10 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 4572LL));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(gpsi + 4704LL);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_QWORD *)(gpsi + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
