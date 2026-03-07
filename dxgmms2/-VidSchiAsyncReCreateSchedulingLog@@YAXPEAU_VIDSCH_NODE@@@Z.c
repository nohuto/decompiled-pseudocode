void __fastcall VidSchiAsyncReCreateSchedulingLog(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v1 = a1;
  v2 = (byte_1C00769C3 & 2) != 0 ? 0x2000 : 2048;
  VidSchiQueueAsyncOperation(a1, v2, &v1);
}
