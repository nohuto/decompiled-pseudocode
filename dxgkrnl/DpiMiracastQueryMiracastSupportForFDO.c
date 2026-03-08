/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C01F7F50
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001D6C8 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001D6F8 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0023EE4 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0024094 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00241A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // bp
  __int64 v8; // rcx
  _WORD *v9; // rcx
  char v11; // cl
  struct _IO_REMOVE_LOCK *v12; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-20h]
  _BYTE v14[16]; // [rsp+60h] [rbp-18h] BYREF

  v2 = 0;
  v12 = a1;
  *(_DWORD *)a2 = 0;
  v13 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v14, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v12) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v14);
    v5 = *(_QWORD *)&a1[122].Common.RemoveEvent.Header.Lock;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 2920);
      if ( v6 )
      {
        v7 = *(_BYTE *)(v6 + 290);
        v8 = *(_QWORD *)(v5 + 2928);
        if ( v8 )
        {
          v9 = (_WORD *)(v8 + 640);
        }
        else
        {
          WdLogSingleEntry1(2LL, 1312LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is display only adapter",
            1312LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v9 = 0LL;
        }
        if ( *(int *)(*(_QWORD *)&a1[122].Common.RemoveEvent.Header.Lock + 2820LL) >= 2000 )
        {
          if ( v7 )
            *(_BYTE *)a2 = 1;
          if ( LODWORD(a1[94].Common.RemoveEvent.Header.WaitListHead.Blink) >= 2 && v9 && *v9 && v7 )
            *(_BYTE *)(a2 + 1) = 1;
        }
        if ( a1[101].Common.RemoveEvent.Header.LockNV != -1 && *(_WORD *)&a1[152].Common.Removed )
        {
          v11 = a1[101].Common.IoCount & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v11;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 1289LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          1289LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v14);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v12);
  return v2;
}
