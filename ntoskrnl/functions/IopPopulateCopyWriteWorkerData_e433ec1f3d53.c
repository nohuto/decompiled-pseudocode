__int64 __fastcall IopPopulateCopyWriteWorkerData(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void *a8,
        struct _KTHREAD **a9,
        unsigned __int64 a10,
        char a11,
        __int64 a12)
{
  __int64 result; // rax
  _DWORD *v17; // r8
  _OWORD v18[9]; // [rsp+38h] [rbp-79h] BYREF

  memset(v18, 0, 0x88uLL);
  v18[1] = a1;
  *(_QWORD *)&v18[8] = a7;
  BYTE10(v18[0]) = 1;
  memset(&v18[2], 0, 24);
  *((_QWORD *)&v18[3] + 1) = a2;
  *(_QWORD *)&v18[4] = a3;
  DWORD2(v18[4]) = a4;
  *(_QWORD *)&v18[5] = 0LL;
  DWORD2(v18[5]) = 0;
  v18[6] = 0LL;
  LODWORD(v18[7]) = -1073741824;
  *((_QWORD *)&v18[7] + 1) = 0LL;
  result = IopValidateAndGetWriteParameters((struct _KTHREAD **)v18, a8, a9, a10, a11);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a12 + 8) = *((_QWORD *)&v18[1] + 1);
    return IopAllocateAndPopulateWriteIrp((__int64)v18, (IRP **)a12, v17);
  }
  return result;
}
