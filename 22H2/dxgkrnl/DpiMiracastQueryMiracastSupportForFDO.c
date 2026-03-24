/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C0174FC4
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E840 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001E898 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001FBB8 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001FBE8 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001FCD4 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v7; // rcx
  char v8; // bp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rcx
  char v11; // cl
  __int64 v13; // rax
  __int64 v14; // rax
  struct _IO_REMOVE_LOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]
  _BYTE v17[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v15 = a1;
  *(_DWORD *)a2 = 0;
  v16 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v17, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v15) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v17);
    Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( Blink )
    {
      v7 = Blink[168].Blink;
      if ( v7 )
      {
        v8 = BYTE2(v7[15].Blink);
        Flink = Blink[169].Flink;
        if ( Flink )
        {
          p_Blink = &Flink[32].Blink;
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(0LL, v5);
          *(_QWORD *)(v14 + 24) = 1287LL;
          WdLogEvent5_WdError(v14);
          Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
          p_Blink = 0LL;
        }
        if ( SHIDWORD(Blink[162].Flink) >= 2000 )
        {
          if ( v8 )
            *(_BYTE *)a2 = 1;
          if ( a1[94].Common.RemoveEvent.Header.LockNV >= 2u && p_Blink && *(_WORD *)p_Blink && v8 )
            *(_BYTE *)(a2 + 1) = 1;
        }
        if ( LODWORD(a1[100].Common.RemoveEvent.Header.WaitListHead.Blink) != -1
          && LOWORD(a1[153].Common.RemoveEvent.Header.WaitListHead.Blink) )
        {
          v11 = BYTE4(a1[100].Common.RemoveEvent.Header.WaitListHead.Flink) & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v11;
        }
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(0LL, v5);
        *(_QWORD *)(v13 + 24) = 1264LL;
        WdLogEvent5_WdError(v13);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v17);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v15);
  return v2;
}
