struct _DISPLAY_PLANE_CONFIG *__fastcall GetDisplayPlaneConfigHead(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, int *a2)
{
  __int64 v2; // rax

  v2 = *(int *)a1;
  if ( (_DWORD)v2 == -1 )
    return 0LL;
  *a2 = v2;
  return (struct _DISPLAY_PLANE_CONFIG_QUEUE *)((char *)a1 + 80 * v2 + 8);
}
