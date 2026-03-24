/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C00357D0
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0035990 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C006B740 (UserValidateCopyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C006B840 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C006B890 (CreateEmptyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0035F00 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00360A8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C013BC44 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E598 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  struct HOBJ__ *inserted; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  void *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  inserted = 0LL;
  v17 = 0;
  if ( gpTypeIsolation[7] )
  {
    v6 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    if ( !v6 )
      goto LABEL_13;
    v8 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0256D50 && (int)qword_1C0256D50(v5, v4, v7) >= 0 && qword_1C0256D58 )
      v11 = qword_1C0256D58(v8, v9, v10);
    else
      v11 = 0LL;
    *(_QWORD *)(v6 + 88) = v11;
    if ( v11 )
      goto LABEL_13;
    REGION::vDeleteREGION((REGION *)v6);
  }
  v6 = 0LL;
LABEL_13:
  v16 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = 112LL;
    *(_DWORD *)(v6 + 80) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 56) = v6 + 48;
    *(_QWORD *)(v6 + 48) = v6 + 48;
    left = a1->left;
    right = a1->right;
    if ( a1->left > right )
    {
      a1->left = right;
      a1->right = left;
    }
    top = a1->top;
    bottom = a1->bottom;
    if ( top > bottom )
    {
      a1->top = bottom;
      a1->bottom = top;
    }
    RGNOBJ::vSet((RGNOBJ *)&v16, a1);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v18);
    if ( !v19 )
    {
      inserted = HmgInsertObjectInternal((struct OBJECT *)v6, 1u, 4u);
      if ( inserted )
        v19 = v6;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v18);
    if ( !inserted )
      REGION::vDeleteREGION((REGION *)v6);
  }
  else
  {
    EngSetLastError(8u);
  }
  return inserted;
}
