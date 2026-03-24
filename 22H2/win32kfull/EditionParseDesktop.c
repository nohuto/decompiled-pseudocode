/*
 * XREFs of EditionParseDesktop @ 0x1C004E980
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0122A70 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 */

__int64 __fastcall EditionParseDesktop(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        _DWORD *a8,
        int a9,
        void **a10)
{
  void **v10; // r14
  _DWORD *v12; // rsi
  unsigned int DesktopEx2; // edi
  __int64 v16; // rcx
  _QWORD *i; // rbx
  const UNICODE_STRING *v18; // rdx
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v10 = a10;
  v12 = a8;
  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( v12 && *v12 != gSessionId )
    return 3221225485LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v20);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 2); ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( v12 )
        DesktopEx2 = xxxCreateDesktopEx2(a1, a3, a4, String1, v12[1], v10);
      goto LABEL_13;
    }
    v18 = ObQueryNameInfo(i) ? (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8) : 0LL;
    if ( v18 && RtlEqualUnicodeString(String1, v18, (a5 & 0x40) != 0) )
      break;
  }
  if ( !v12 )
  {
    DesktopEx2 = 0;
    goto LABEL_12;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
LABEL_12:
    ObfReferenceObject(i);
    *v10 = i;
    goto LABEL_13;
  }
  DesktopEx2 = -1073741771;
LABEL_13:
  if ( !(_DWORD)v20 )
    UserSessionSwitchLeaveCrit(v16);
  return DesktopEx2;
}
