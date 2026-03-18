/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00CF6F0
 * Callers:
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00CF6B8 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00CF7F8 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00CF8CC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  OPM *v6; // rbp
  PRKMUTEX *v10; // rbx
  int *v11; // r14
  COPMProtectedOutput *Pool2; // rax
  COPMProtectedOutput *v13; // rax
  COPMProtectedOutput *v14; // rsi
  int v15; // edi
  COPM *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = this;
  v6 = qword_1C0296A08;
  v10 = (PRKMUTEX *)((char *)qword_1C0296A08 + 48);
  OPM::CMutex::Lock((void **)qword_1C0296A08 + 6);
  v11 = a6;
  LODWORD(v17) = 0;
  *a6 = 0;
  Pool2 = (COPMProtectedOutput *)ExAllocatePool2(258LL, 88LL);
  if ( Pool2 && (v13 = COPMProtectedOutput::COPMProtectedOutput(Pool2, a2, a3, a4, (int *)&v17), (v14 = v13) != 0LL) )
  {
    v15 = (int)v17;
    if ( (int)v17 >= 0 )
    {
      LODWORD(v17) = 0;
      v15 = OPM::CList<COPMProtectedOutput>::AddElement((char *)v6 + 24, v13, &v17);
      if ( v15 >= 0 )
      {
        *a5 = (void *)(unsigned int)v17;
LABEL_6:
        v15 = 0;
        goto LABEL_7;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v14)(v14, 1LL);
    if ( v15 == -1073741198 )
    {
      *v11 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v15 = -1073741801;
  }
LABEL_7:
  if ( *v10 )
    KeReleaseMutex(*v10, 0);
  return (unsigned int)v15;
}
