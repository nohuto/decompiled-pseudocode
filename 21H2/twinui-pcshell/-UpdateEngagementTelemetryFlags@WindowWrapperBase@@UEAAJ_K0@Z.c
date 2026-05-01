/*
 * XREFs of ?UpdateEngagementTelemetryFlags@WindowWrapperBase@@UEAAJ_K0@Z @ 0x180070CC0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_05866f203c62ed003bc67edc498d1dcd___ @ 0x180070D2C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_05866f203c62ed003bc67edc498d1dcd.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::UpdateEngagementTelemetryFlags(WindowWrapperBase *this, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( *((_QWORD *)this + 11) )
  {
    if ( a2 )
    {
      v7[0] = (char *)this - 16;
      v7[1] = &v9;
      v7[2] = &v10;
      CurrentThreadId = GetCurrentThreadId();
      v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_05866f203c62ed003bc67edc498d1dcd___(
             v4,
             CurrentThreadId,
             v7);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5FB,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v5,
          v7[0]);
        JUMPOUT(0x18019C71CLL);
      }
    }
  }
  return 0LL;
}
