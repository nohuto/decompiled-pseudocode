__int64 __fastcall COPM::CreateProtectedOutput(
        void **this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  int *v10; // r14
  COPMProtectedOutput *Pool2; // rax
  COPMProtectedOutput *v12; // rax
  COPMProtectedOutput *v13; // rsi
  int v14; // edi
  struct _KMUTANT *v15; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF

  OPM::CMutex::Lock(this + 6);
  v10 = a6;
  v17 = 0;
  *a6 = 0;
  Pool2 = (COPMProtectedOutput *)ExAllocatePool2(258LL, 88LL, 1297108807LL);
  if ( Pool2 && (v12 = COPMProtectedOutput::COPMProtectedOutput(Pool2, a2, a3, a4, &v17), (v13 = v12) != 0LL) )
  {
    v14 = v17;
    if ( v17 >= 0 )
    {
      LODWORD(a6) = 0;
      v14 = OPM::CList<COPMProtectedOutput>::AddElement((__int64)(this + 3), (__int64)v12, &a6);
      if ( v14 >= 0 )
      {
        *a5 = (void *)(unsigned int)a6;
        goto LABEL_10;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v13)(v13, 1LL);
  }
  else
  {
    v14 = -1073741801;
  }
  if ( v14 != -1073741198 )
    goto LABEL_11;
  *v10 = 1;
LABEL_10:
  v14 = 0;
LABEL_11:
  v15 = (struct _KMUTANT *)this[6];
  if ( v15 )
    KeReleaseMutex(v15, 0);
  return (unsigned int)v14;
}
