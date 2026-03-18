/*
 * XREFs of LogFwReport @ 0x140AED0B8
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x14036E2D8 (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x140384170 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140384700 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C0E4B0 & 0x80u) != 0 )
  {
    dword_140C0E4B0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C0C9C0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CF7C28 = v1;
    dword_140CF7C30 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140D16AD8.Parameter = 0LL;
    stru_140D16AD8.List.Flink = 0LL;
    dword_140CF7BE8 = BitsPerPixel;
    dword_140CF7BD8 = dword_140C0E4B0;
    dword_140CF7C40 = 1000000 * qword_140CF7C00 / qword_140C0C9C0;
    dword_140CF7C1C = 1000000 * qword_140CF7C10 / qword_140C0C9C0;
    dword_140CF7BEC = 1000000 * qword_140CF7C08 / qword_140C0C9C0;
    stru_140D16AD8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140D16AD8, DelayedWorkQueue);
    if ( (dword_140C0E4B0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CF7C28,
        HIDWORD(qword_140CF7C28),
        dword_140CF7BE8);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CF7C38 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CF7C18);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C0E4D0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C0B708 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CF7BE0 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140D18110 / qword_140C0C9C0,
        1000000 * qword_140CF7BC8 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CF7C20 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CF7BF0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C0E4CC,
        dword_140CF7C1C,
        dword_140CF7BEC);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C0B710 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CF7BF8 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CF7C40,
        1000000 * qword_140CF7BD0 / qword_140C0C9C0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CF7BB8 / qword_140C0C9C0);
      if ( qword_140C0E4E0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C0E4E0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140D18118 / qword_140C0C9C0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
