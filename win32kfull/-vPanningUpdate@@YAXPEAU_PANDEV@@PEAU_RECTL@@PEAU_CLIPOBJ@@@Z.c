void __fastcall vPanningUpdate(struct _PANDEV *a1, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // edx
  LONG right; // r9d
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v14; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v15; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    right = a2->right;
    if ( a3->rclBounds.left > left )
      left = a3->rclBounds.left;
    v8 = a2->top;
    v15.left = left;
    if ( top > v8 )
      v8 = top;
    bottom = a3->rclBounds.bottom;
    v15.top = v8;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    v10 = a2->bottom;
    v15.right = right;
    if ( bottom < v10 )
      v10 = bottom;
    v15.bottom = v10;
  }
  else
  {
    v15 = *a2;
    right = v15.right;
    left = v15.left;
  }
  if ( left < right && v15.top < v15.bottom )
  {
    v14 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
    EngAcquireSemaphore(v14);
    v12 = *((_QWORD *)a1 + 12);
    v11 = *((_QWORD *)a1 + 11);
    v13 = *((_QWORD *)a1 + 10);
    RGNOBJ::vSet((RGNOBJ *)&v12, &v15);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v12, 0xEu) )
      RGNOBJ::vSet((RGNOBJ *)&v11);
    *((_QWORD *)a1 + 11) = v13;
    *((_QWORD *)a1 + 10) = v11;
    *((_DWORD *)a1 + 26) = 1;
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v14);
  }
}
