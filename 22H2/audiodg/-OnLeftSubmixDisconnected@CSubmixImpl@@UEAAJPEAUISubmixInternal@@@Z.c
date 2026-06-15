/*
 * XREFs of ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000168C (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BD0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixDisconnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // rcx
  __int64 **v6; // rsi
  struct ISubmixInternal ***Next; // rax
  struct ISubmixInternal **v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 *i; // rdx
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x568,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v13);
  }
  else
  {
    v6 = (__int64 **)((char *)this + 120);
    v15 = (_QWORD *)*((_QWORD *)this + 15);
    if ( v15 )
    {
      while ( 1 )
      {
        Next = (struct ISubmixInternal ***)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                             v5,
                                             &v15);
        v8 = *Next;
        if ( **Next == a2 )
          break;
        if ( !v15 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v8 = 0LL;
    }
    if ( v8 )
    {
      v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
      EnterCriticalSection(v9);
      for ( i = *v6; i && (struct ISubmixInternal **)i[2] != v8; i = (__int64 *)*i )
        ;
      ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt(v6, i);
      if ( v9 )
        LeaveCriticalSection(v9);
      operator delete(v8);
    }
    v11 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v11;
}
