__int64 __fastcall ReadSystemMem(unsigned __int64 Src, size_t Size, __int64 a3)
{
  size_t v5; // rbx
  int (__fastcall *v7)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v5 = (unsigned int)Size;
  if ( (unsigned int)Size > 8 )
    return -1LL;
  if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
    || (v7 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
    || v7(0LL, Src, &v13, (unsigned int)Size, &v12) < 0 )
  {
    if ( !(Src % v5) )
    {
      v9 = v5 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            if ( v11 == 4 )
              v8 = *(_QWORD *)Src;
            else
              v8 = -1LL;
          }
          else
          {
            v8 = *(unsigned int *)Src;
          }
        }
        else
        {
          v8 = *(unsigned __int16 *)Src;
        }
      }
      else
      {
        v8 = *(unsigned __int8 *)Src;
      }
      return a3 & v8;
    }
    memmove(&v13, (const void *)Src, v5);
  }
  v8 = v13;
  return a3 & v8;
}
