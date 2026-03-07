void __fastcall VidSchiStopExecutionTimeAtThisPriority(
        struct _VIDSCH_NODE *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx
  __int64 v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // r10

  v5 = (__int64)gulPriorityToYieldPriorityBand;
  v8 = gulPriorityToYieldPriorityBand[a2];
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned __int64 *)((char *)a1 + 8 * v8 + 1968);
    do
    {
      if ( *(v9 - 8) )
      {
        v10 = *v9 - *(v9 - 4);
        *(v9 - 4) = 0LL;
        v11 = a3 + v10;
        *v9 = v11;
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          if ( is_mul_ok(v11, 0x989680uLL) )
          {
            v12 = v11 * (unsigned __int128)0x989680uLL % a4;
            v13 = v11 * (unsigned __int128)0x989680uLL / a4;
          }
          else
          {
            v12 = v11 % a4;
            v5 = 10000000 * (v11 / a4);
            v13 = v5 + 10000000 * (v11 % a4) / a4;
          }
          McTemplateK0pqxq_EtwWriteTransfer(
            v5,
            v12,
            v11,
            *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL),
            v8,
            v13,
            *((_WORD *)a1 + 2));
        }
      }
      --v9;
      LODWORD(v8) = v8 - 1;
    }
    while ( (_DWORD)v8 );
  }
}
