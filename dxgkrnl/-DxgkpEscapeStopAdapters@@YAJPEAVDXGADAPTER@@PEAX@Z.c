/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B2190
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     DxgkInvalidateDeviceState @ 0x1C005E3A0 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *a1, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  PVOID v11; // rsi
  _BYTE v13[144]; // [rsp+20h] [rbp-B8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    v11 = a1[27];
    if ( v11 )
    {
      ObfReferenceObject(a1[27]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v13);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1)
        && (*((_DWORD *)a1 + 109) & 0x10) == 0
        && ((_DWORD)a1[349] & 8) == 0 )
      {
        a2[1] = 1;
        DxgkInvalidateDeviceState((__int64)a1[27]);
      }
      ObfDereferenceObject(v11);
    }
    else
    {
      v9 = -1073741823;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 102);
    v10[5] = *((unsigned int *)a1 + 101);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
