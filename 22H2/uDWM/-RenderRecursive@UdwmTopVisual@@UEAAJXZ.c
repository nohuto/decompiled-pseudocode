/*
 * XREFs of ?RenderRecursive@UdwmTopVisual@@UEAAJXZ @ 0x180039EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmTopVisual::RenderRecursive(UdwmTopVisual *this)
{
  int v1; // eax
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UdwmTopVisual *v11; // [rsp+48h] [rbp+10h]
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+50h] [rbp+18h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 48LL))(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v1 = *((_DWORD *)this + 20);
  }
  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    if ( *((_QWORD *)this + 30) )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      v3 = *((_QWORD *)this + 30);
      v11 = this;
      v6 = v3;
      if ( v3 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
        v6 = *((_QWORD *)this + 30);
      }
      v12 = (void (__fastcall ***)(_QWORD, __int64))v3;
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      if ( v4 < 0 )
        goto LABEL_5;
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~1u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0xFFFFFFFE) != 0
    && (v9 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 56LL))(this), v4 = v9, v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v4 = 0;
  }
LABEL_5:
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    (**v12)(v12, 1LL);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(UdwmTopVisual *, __int64))v11)(v11, 1LL);
  }
  return (unsigned int)v4;
}
