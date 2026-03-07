void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  int v2; // eax
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int *v8; // rbx
  char *v9; // rax
  char *v10; // rbx
  int v11; // eax
  unsigned int *v12; // rbx
  CTDR_DUMP_BUFFER *v13; // rcx
  _DWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4);
  if ( *((_QWORD *)a1 + 356) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
    if ( v3 )
    {
      if ( v2 != 6 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 2920LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v14, v4, 0x2000);
            v7 = DmmCollectTdrDiagInfo(a1, v5, v6);
            if ( v7 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v7 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v14) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v5, 0x2000LL);
            }
            if ( v14 )
              *v14 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v8 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v8);
          *((_QWORD *)a1 + 357) = v8[6];
          *((_DWORD *)a1 + 35) = 5;
          TdrUpdateDbgReport(a1, 1);
        }
        v9 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 7, 0x804u);
        v10 = v9;
        if ( v9 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v14, v9, 2048);
          v11 = DxgkCollectCoreDbgInfo(a1, v10);
          if ( v11 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v11 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v14) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v10, 2048LL);
          }
          if ( v14 )
            *v14 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v12 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 357) = v12[6];
        *((_DWORD *)a1 + 35) = 7;
        TdrUpdateDbgReport(a1, 1);
      }
      v13 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
      if ( v13 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v13);
      *((_QWORD *)a1 + 358) = 0LL;
    }
  }
}
