void __fastcall CommonBuffer_WorkItem(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KIRQL v5; // r8
  __int64 ****v6; // rdx
  __int64 ***v7; // rcx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rbx
  __int64 **v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  unsigned int v15; // eax
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v18; // [rsp+48h] [rbp-18h]
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+88h] [rbp+28h] BYREF

  v20 = 0;
  v18 = &v17;
  v17 = (__int64 *)&v17;
  v19 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 6);
  v6 = (__int64 ****)(Context + 56);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v7[1] != (__int64 **)v6
      || (v12 = *v7, (*v7)[1] != (__int64 *)v7)
      || (*v6 = (__int64 ***)v12, v12[1] = (__int64 *)v6, v13 = v18, *v18 != (__int64 *)&v17) )
    {
LABEL_16:
      __fastfail(3u);
    }
    v7[1] = v18;
    *v7 = &v17;
    *v13 = v7;
    v18 = (__int64 **)v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 6, v5);
  while ( 1 )
  {
    v11 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_16;
    v14 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_16;
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    v11[1] = (__int64)v11;
    *v11 = (__int64)v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(*(_QWORD *)Context + 72LL),
        v8,
        v9,
        v10,
        v16,
        (char)v11,
        v11[2],
        *((_DWORD *)v11 + 6));
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
    v15 = XilCoreCommonBuffer_AcquireBuffers(
            (int)Context + 88,
            *((_DWORD *)v11 + 6),
            *((_DWORD *)v11 + 7),
            (unsigned int)&v19,
            v11[2],
            *((_DWORD *)v11 + 8),
            (__int64)&v20);
    ((void (__fastcall *)(__int64 *, _QWORD, __int128 *))v11[5])(v11, v15, &v19);
  }
  XilCoreCommonBuffer_PreAllocateBuffers(Context + 88);
  IoFreeWorkItem(IoWorkItem);
  KeSetEvent((PRKEVENT)Context + 1, 0, 0);
}
