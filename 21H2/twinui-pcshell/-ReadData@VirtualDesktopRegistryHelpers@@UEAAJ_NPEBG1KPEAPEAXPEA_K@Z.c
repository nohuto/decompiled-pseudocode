/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x1804A4860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **pdwType,
        unsigned __int64 *a7)
{
  void **v7; // rsi
  int v8; // edi
  unsigned __int64 *v9; // r14
  __int64 v12; // rdx
  unsigned int v13; // ebx
  LSTATUS result; // eax
  HKEY v15; // r12
  void *pvData; // rbx
  unsigned int ValueW; // eax
  void *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD pcbData; // [rsp+78h] [rbp+10h] BYREF

  v7 = pdwType;
  v8 = 0;
  v9 = a7;
  *pdwType = 0LL;
  *v9 = 0LL;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v12 = 43LL;
      goto LABEL_4;
    }
  }
  else if ( !*((_QWORD *)this + 2) )
  {
    v12 = 40LL;
LABEL_4:
    v13 = -2147024894;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v13);
    return v13;
  }
  v15 = (HKEY)*((_QWORD *)this + a2 + 2);
  result = SHRegGetValueW(v15, a3, a4, 0xFFFF, (DWORD *)&pdwType, 0LL, &pcbData);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    if ( (_DWORD)pdwType != a5 )
    {
      v13 = -2147023267;
      v12 = 50LL;
      goto LABEL_5;
    }
    pvData = CoTaskMemAlloc(pcbData);
    if ( pvData )
    {
      ValueW = SHRegGetValueW(v15, a3, a4, 0xFFFF, 0LL, pvData, &pcbData);
      if ( ValueW )
      {
        v8 = wil::details::in1diag3::Return_Win32(
               retaddr,
               54LL,
               (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
               (const char *)ValueW);
      }
      else
      {
        v18 = pvData;
        pvData = 0LL;
        *v7 = v18;
        *v9 = pcbData;
      }
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)0x8007000ELL);
    }
    CoTaskMemFree(pvData);
    return v8;
  }
  return result;
}
