__int64 __fastcall VidSchWaitForPagingFence(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  char v4; // r15
  unsigned int v5; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  struct VIDSCH_HW_QUEUE *v11; // rcx

  if ( a4 )
  {
    v4 = *(_BYTE *)(a1 + 55);
    v5 = a4;
    v9 = 0LL;
    do
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 76) )
        break;
      if ( (v5 & 1) != 0 )
      {
        if ( v4 )
        {
          result = *(_QWORD *)(a1 + 280);
          v11 = *(struct VIDSCH_HW_QUEUE **)(result + 8 * v9);
          if ( v11 )
            result = VidSchSubmitWaitToHwQueue(v11, a2, a3);
        }
        else
        {
          result = VidSchWaitForSingleSyncObject(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v9), (__int64)a2, a3);
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v5 >>= 1;
    }
    while ( v5 );
  }
  return result;
}
