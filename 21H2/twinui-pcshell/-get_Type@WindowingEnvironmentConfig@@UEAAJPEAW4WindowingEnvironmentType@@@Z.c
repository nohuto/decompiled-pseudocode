/*
 * XREFs of ?get_Type@WindowingEnvironmentConfig@@UEAAJPEAW4WindowingEnvironmentType@@@Z @ 0x180357ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowingEnvironmentConfig::get_Type(
        WindowingEnvironmentConfig *this,
        enum WindowingEnvironmentType *a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( !*((_QWORD *)this + 4) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        21LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL);
    *(_DWORD *)a2 = *((_DWORD *)this + 14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1C,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           a4);
  }
  return result;
}
