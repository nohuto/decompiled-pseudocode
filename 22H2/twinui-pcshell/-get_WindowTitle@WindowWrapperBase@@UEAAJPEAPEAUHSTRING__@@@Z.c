/*
 * XREFs of ?get_WindowTitle@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803510A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DB984 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6f7d8edcc79332d2588e530a2e25d22f___ @ 0x18034C734 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6f7d8edcc79332d2588e530a2e25d22f.c)
 */

__int64 __fastcall WindowWrapperBase::get_WindowTitle(WindowWrapperBase *this, HSTRING *a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
      1u,
      a3);
    *(_QWORD *)v9 = &v11;
    *(_QWORD *)&v9[2] = (char *)this - 8;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6f7d8edcc79332d2588e530a2e25d22f___(
           v5,
           CurrentThreadId,
           (__int128 *)v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1104LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x459,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
