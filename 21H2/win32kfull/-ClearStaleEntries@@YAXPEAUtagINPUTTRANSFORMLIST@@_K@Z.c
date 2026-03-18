/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0004A24
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C01F00C4 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // r8
  bool v8; // bp
  int v9; // edx
  char *v10; // rcx
  char *i; // rsi
  __int64 v12; // rcx
  char **v13; // rax
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]

  v4 = (char *)a1 + 8;
  v6 = (char *)*((_QWORD *)a1 + 1);
  if ( v6 != (char *)a1 + 8 && v6 != *((char **)a1 + 2) )
  {
    v7 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v7 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v10 = *(char **)v6;
      if ( *(char **)v6 != v4 )
      {
        do
        {
          if ( a2 - *((_QWORD *)v6 + 2) > v7 )
            break;
          v6 = v10;
          v10 = *(char **)v10;
        }
        while ( v10 != v4 );
        for ( i = *(char **)v6; *(char **)v6 != v4; i = *(char **)v6 )
        {
          LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_i(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              v7,
              a4,
              v14,
              v15,
              v16,
              v17,
              *((_QWORD *)i + 2));
          EtwTraceTransformAgeDecay(a1, *((_QWORD *)i + 2), v7);
          v12 = *(_QWORD *)i;
          if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v13 = (char **)*((_QWORD *)i + 1), *v13 != i) )
            __fastfail(3u);
          *v13 = (char *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          Win32FreePool(i);
          *((_DWORD *)a1 + 22) |= 2u;
        }
      }
    }
    else
    {
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 11;
        LOBYTE(v9) = v8;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v7,
          a4,
          4,
          10,
          11,
          (__int64)&WPP_39b29109440736b79d6ba092fd9c72a8_Traceguids);
      }
    }
  }
}
