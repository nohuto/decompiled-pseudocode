/*
 * XREFs of ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1802B9250
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B9380 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802B9924 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddBufferReference(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  char *v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  char *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 3) > 2 )
  {
    *a2 = 0LL;
    v4 = *a1;
    v5 = (char *)a2 - *(_QWORD *)(*a1 + 8LL);
    v14 = v5;
    if ( a3 == 1 )
    {
      v6 = *(_DWORD *)(v4 + 560);
      v7 = v6 + 1;
      if ( v6 + 1 >= v6 )
      {
        v8 = 0;
        if ( v7 <= *(_DWORD *)(v4 + 556) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 536) + 8LL * v6) = v5;
          *(_DWORD *)(v4 + 560) = v7;
          return v8;
        }
        v9 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 536, 8, 1, &v14);
LABEL_14:
        v8 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
        return v8;
      }
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)-2003304320;
      v11 = *(_DWORD *)(v4 + 616);
      v12 = v11 + 1;
      if ( v11 + 1 >= v11 )
      {
        v8 = 0;
        if ( v12 <= *(_DWORD *)(v4 + 612) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 592) + 8LL * *(unsigned int *)(v4 + 616)) = v5;
          *(_DWORD *)(v4 + 616) = v12;
          return v8;
        }
        v9 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 592, 8, 1, &v14);
        goto LABEL_14;
      }
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return v8;
  }
  *a2 = *(_QWORD *)(a1[1] + 8LL * (unsigned int)(a3 - 3));
  return v3;
}
