/*
 * XREFs of ?Init@CTextCache@@QEAAJXZ @ 0x18004B528
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004A468 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800BF52C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTextCache::Init(CTextCache *this)
{
  signed int v2; // edi
  HDC CompatibleDC; // rax
  signed int LastError; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // r8d

  v2 = 0;
  SetLastError(0);
  CompatibleDC = CreateCompatibleDC(0LL);
  *((_QWORD *)this + 13) = CompatibleDC;
  if ( CompatibleDC )
  {
    SetBkMode(CompatibleDC, 2);
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v7, v6, v8);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x21u);
  }
  return (unsigned int)v2;
}
