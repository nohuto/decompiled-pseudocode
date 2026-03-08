/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02CB1C8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *a1, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  UINT v12; // ecx
  _BYTE v14[144]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  if ( v5 >= 0 )
  {
    v11 = *((_QWORD *)a1 + 365);
    if ( v11 )
    {
      a2->Value ^= (a2->Value ^ (*(_DWORD *)(v11 + 24) >> 1)) & 1;
      v12 = a2->Value ^ ((unsigned __int8)a2->Value ^ (unsigned __int8)(*(_DWORD *)(v11 + 24) >> 5)) & 2;
    }
    else
    {
      v12 = a2->Value & 0xFFFFFFFC;
    }
    a2->Value = v12;
  }
  else if ( v5 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 102);
    v10[5] = *((unsigned int *)a1 + 101);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return v2;
}
