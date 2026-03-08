/*
 * XREFs of LogFwReport @ 0x140AE90F4
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x1403029E8 (BgpGetResolution.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     BgpFwQueryPerformanceCounter @ 0x140381520 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C0E3B0 & 0x80u) != 0 )
  {
    dword_140C0E3B0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C0C8C0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CF77D8 = v1;
    dword_140CF77E0 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140D16718.Parameter = 0LL;
    stru_140D16718.List.Flink = 0LL;
    dword_140CF77A4 = BitsPerPixel;
    dword_140CF7798 = dword_140C0E3B0;
    dword_140CF77F0 = 1000000 * qword_140CF77B8 / qword_140C0C8C0;
    dword_140CF77A0 = 1000000 * qword_140CF77C8 / qword_140C0C8C0;
    dword_140CF77A8 = 1000000 * qword_140CF7800 / qword_140C0C8C0;
    stru_140D16718.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140D16718, DelayedWorkQueue);
    if ( (dword_140C0E3B0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CF77D8,
        HIDWORD(qword_140CF77D8),
        dword_140CF77A4);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CF77E8 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CF779C);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C0E3D0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C0B6F8 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CF7778 / qword_140C0C8C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140D17DB0 / qword_140C0C8C0,
        1000000 * qword_140CF7788 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CF77D0 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CF77AC);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C0E3CC,
        dword_140CF77A0,
        dword_140CF77A8);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C0B700 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CF77B0 / qword_140C0C8C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CF77F0,
        1000000 * qword_140CF7790 / qword_140C0C8C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CF77C0 / qword_140C0C8C0);
      if ( qword_140C0E3E0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C0E3E0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140D17DB8 / qword_140C0C8C0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
