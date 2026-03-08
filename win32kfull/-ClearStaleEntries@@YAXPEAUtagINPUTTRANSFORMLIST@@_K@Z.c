/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0007E84
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007904 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C0007FD4 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // r8
  char *i; // rcx
  char *j; // rsi
  __int64 v10; // rcx
  char **v11; // rax
  bool v12; // bp
  int v13; // edx
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
      for ( i = *(char **)v6; i != v4 && a2 - *((_QWORD *)v6 + 2) <= v7; i = *(char **)i )
        v6 = i;
      for ( j = *(char **)v6; *(char **)v6 != v4; j = *(char **)v6 )
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
            *((_QWORD *)j + 2));
        EtwTraceTransformAgeDecay(a1, *((_QWORD *)j + 2), v7);
        v10 = *(_QWORD *)j;
        if ( *(char **)(*(_QWORD *)j + 8LL) != j || (v11 = (char **)*((_QWORD *)j + 1), *v11 != j) )
          __fastfail(3u);
        *v11 = (char *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        Win32FreePool(j);
        *((_DWORD *)a1 + 22) |= 2u;
      }
    }
    else
    {
      v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 11;
        LOBYTE(v13) = v12;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
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
