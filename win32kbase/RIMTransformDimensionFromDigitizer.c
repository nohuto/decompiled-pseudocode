/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1C01BE2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0032C40 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0033950 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00EFE38 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMConvertPointCoordinates @ 0x1C01BD270 (RIMConvertPointCoordinates.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2298);
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x80u) != 0 && *(_QWORD *)(a1 + 544) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v15,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 408) + 104LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 224LL) - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( a2 )
        goto LABEL_10;
    }
    else
    {
      if ( a2 )
      {
        v8 = a2[1];
        a2[1] = *a2;
        *a2 = v8;
LABEL_10:
        RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 544), *(_QWORD *)a2, a3);
        goto LABEL_11;
      }
      v9 = a3[1];
      a3[1] = *a3;
      *a3 = v9;
    }
LABEL_11:
    v10 = *(_QWORD *)(a1 + 544);
    v11 = *(_QWORD *)a3;
    v12 = *(_OWORD *)(v10 + 160);
    v13 = v12;
    v14 = *(_OWORD *)(v10 + 176);
    if ( (unsigned int)RIMConvertPointCoordinates(v11, (int *)&v14, (int *)&v13, (_QWORD *)a4) )
    {
      *(_DWORD *)a4 = abs32(v12 - *(_DWORD *)a4);
      *(_DWORD *)(a4 + 4) = abs32(DWORD1(v12) - *(_DWORD *)(a4 + 4));
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v15);
  }
}
