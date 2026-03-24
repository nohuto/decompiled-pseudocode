/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02229A4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *this, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-99h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v15; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v15.Type = 16LL;
    v15.pOutputData = &v14;
    *(_QWORD *)&v15.InputDataSize = 0LL;
    *(_QWORD *)&v15.Flags.0 = 0LL;
    HIDWORD(v15.hKmdProcessHandle) = 0;
    v14 = 0;
    v15.pInputData = 0LL;
    v15.OutputDataSize = 4;
    v11 = DXGADAPTER::DdiQueryAdapterInfo(this, &v15, v8);
    if ( v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v6);
      *(_QWORD *)(v12 + 24) = 2429LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v2 = v11;
    a2->Value ^= (a2->Value ^ (v14 >> 1)) & 1;
  }
  else if ( v5 == -1073741130 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = this;
    v9[4] = *((int *)this + 80);
    v9[5] = *((unsigned int *)this + 79);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, v6);
  return v2;
}
