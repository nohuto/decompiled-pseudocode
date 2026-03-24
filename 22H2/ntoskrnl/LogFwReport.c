/*
 * XREFs of LogFwReport @ 0x1409F1524
 * Callers:
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x14032CEB0 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039B780 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14039BB80 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C134F0 & 0x80u) != 0 )
  {
    dword_140C134F0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C11078);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CDB208 = v1;
    dword_140CDB210 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140CF3318.Parameter = 0LL;
    stru_140CF3318.List.Flink = 0LL;
    dword_140CDB1B8 = BitsPerPixel;
    dword_140CDB174 = dword_140C134F0;
    dword_140CDB1E0 = 1000000 * qword_140CDB1A8 / qword_140C11078;
    dword_140CDB1F8 = 1000000 * qword_140CDB1D0 / qword_140C11078;
    dword_140CDB1CC = 1000000 * qword_140CDB1D8 / qword_140C11078;
    stru_140CF3318.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140CF3318, DelayedWorkQueue);
    if ( (dword_140C134F0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CDB208,
        HIDWORD(qword_140CDB208),
        dword_140CDB1B8);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CDB200 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CDB180);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C13510);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C11068 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CDB1C0 / qword_140C11078);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CDB178 / qword_140C11078,
        1000000 * qword_140CDB1A0 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CDB1F0 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CDB1C8);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C1350C,
        dword_140CDB1F8,
        dword_140CDB1CC);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C11070 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CDB1B0 / qword_140C11078);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CDB1E0,
        1000000 * qword_140CDB198 / qword_140C11078);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CDB190 / qword_140C11078);
      if ( qword_140C13520 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C13520);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140CF5338 / qword_140C11078);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
