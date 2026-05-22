/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180184CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x180184E1C (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(struct tagPOINT *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // esi
  int v6; // ecx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  int v9; // ebp
  bool v10; // zf
  bool v11; // bp
  const struct tagPOINT *v12; // r8
  bool v13; // r9
  char v14; // r9
  LONG x; // ecx
  char v16; // cl
  char v17; // cl

  if ( (a3 & 0x100) != 0 )
    return 0LL;
  v5 = 1;
  v6 = *((_DWORD *)a2 + 3) & 0x7880;
  if ( v6 )
    v5 = *((_DWORD *)a2 + 187);
  v7 = -(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE70uLL;
  v8 = v7 + 1156;
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
    (*(void (__fastcall **)(struct tagPOINT *))(*(_QWORD *)this + 32LL))(this);
  v10 = v5 == 1;
  if ( v5 == 1 )
  {
LABEL_9:
    v11 = v10;
    v12 = (const struct tagPOINT *)((char *)a2 + v8);
    v13 = 0;
    if ( (this[3].y & 0x10000) != 0 )
    {
      x = this[4].x;
    }
    else
    {
      v14 = BYTE2(this[3].y) | 1;
      BYTE2(this[3].y) = v14;
      this[7] = *v12;
      this[8] = *(struct tagPOINT *)((char *)a2 + v8);
      x = *(unsigned __int16 *)((char *)a2 + v7 + 1154);
      this[4].x = x;
      v13 = (v14 & 2) != 0;
    }
    if ( *(unsigned __int16 *)((char *)a2 + v7 + 1154) == x )
      DragRecognizer::AddPoint((DragRecognizer *)this, a2, v12, v13);
    else
      v11 = 0;
    if ( v11 )
      return 0LL;
    goto LABEL_16;
  }
  if ( v9 )
  {
    v10 = v5 == 1;
    goto LABEL_9;
  }
LABEL_16:
  v16 = BYTE2(this[3].y);
  if ( (v16 & 1) != 0 )
  {
    v17 = v16 & 0xFE;
    BYTE2(this[3].y) = v17;
    if ( (v17 & 2) != 0 )
    {
      v17 |= 8u;
      BYTE2(this[3].y) = v17;
    }
    if ( v5 > 1 && (v17 & 6) == 2 )
    {
      this[9].x &= 0xFFFFFFCF;
      BYTE2(this[3].y) = v17 | 4;
    }
  }
  return 0LL;
}
