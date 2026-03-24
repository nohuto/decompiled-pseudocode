/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001A530
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0169C84 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbp
  char v12; // bl
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r14
  SIZE_T v21; // rax
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v7 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v32);
  v9 = *((_DWORD *)this + v4 + 302);
  v10 = (unsigned int)v4;
  v11 = *((unsigned int *)this + v4 + 238);
  v12 = 0;
  v13 = (unsigned __int8)v9;
  v33 = 2;
  if ( (_DWORD)v11 == (unsigned __int8)v9 )
  {
    v18 = (unsigned int)(2 * v11);
    v19 = 255;
    v20 = v11;
    LODWORD(v11) = 4;
    if ( (unsigned int)v18 < 0xFF )
      v19 = v18;
    if ( v19 >= 4 )
    {
      LODWORD(v11) = 255;
      if ( (unsigned int)v18 < 0xFF )
        LODWORD(v11) = v18;
    }
    if ( (_DWORD)v11 == (_DWORD)v20 )
    {
      v28 = WdLogNewEntry5_WdError(v18, 255LL);
      *(_QWORD *)(v28 + 24) = 797LL;
      WdLogEvent5_WdError(v28);
      goto LABEL_8;
    }
    v21 = 8LL * (unsigned int)v11;
    if ( !is_mul_ok((unsigned int)v11, 8uLL) )
      v21 = -1LL;
    v22 = (char *)operator new[](v21, 0x4B677844u, PagedPool);
    v27 = v22;
    if ( !v22 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v29 + 24) = (unsigned int)v11;
      WdLogEvent5_WdLowResource(v29);
      goto LABEL_8;
    }
    memset(&v22[8 * v20], 0, 8LL * (unsigned int)(v11 - v20));
    if ( (_DWORD)v20 )
    {
      memmove(v27, this[v10 + 103], 8 * v20);
      v13 = (unsigned __int64)this[v10 + 103];
      if ( v13 )
        ExFreePoolWithTag((PVOID)v13, 0);
    }
    v7 = a4;
    this[v10 + 103] = (struct _KTHREAD *)v27;
    *((_DWORD *)this + v10 + 238) = v11;
  }
  v14 = 0;
  if ( (_DWORD)v11 )
  {
    v13 = (unsigned __int64)this[v10 + 103];
    while ( 1 )
    {
      v15 = v14;
      if ( !*(_QWORD *)(v13 + 8LL * v14) )
        break;
      if ( ++v14 >= *((_DWORD *)this + v10 + 238) )
        goto LABEL_25;
    }
    v16 = WdLogNewEntry5_WdTrace(v13, v8);
    v12 = 1;
    *(_QWORD *)(v16 + 24) = a3;
    *(_QWORD *)(v16 + 32) = v10;
    *((_QWORD *)this[v10 + 103] + v15) = a3;
    ++*((_BYTE *)this + 4 * v10 + 1208);
    *v7 = (*((_DWORD *)this + v10 + 302) >> 8) & 1;
  }
  else
  {
LABEL_25:
    v30 = WdLogNewEntry5_WdAssertion(v13, v8);
    *(_QWORD *)(v30 + 24) = 854LL;
    WdLogEvent5_WdAssertion(v30);
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  return v12;
}
