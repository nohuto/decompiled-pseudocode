/*
 * XREFs of ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0297E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C019D16C (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct _DXGKARG_CONTROLMODEBEHAVIOR v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v8 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 649) >= 2400 )
    {
      *(_QWORD *)&v12.Request.0 = 0LL;
      v12.NotSatisfied.Value = 0;
      v12.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v12, v7) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v5) + 24) = this;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v9[3] = this;
    v9[4] = *((int *)this + 80);
    v9[5] = *((unsigned int *)this + 79);
  }
  else
  {
    v8 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13, v5);
  return v8;
}
