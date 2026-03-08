/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800B23D8
 * Callers:
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800B2270 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  void *v2; // rdi
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v9; // r14d
  int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  void *v13; // rbx
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = a1[1];
  v6 = 0;
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v9 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_5;
  }
  if ( v9 <= 0x40 )
    v9 = 64;
  v10 = HrMalloc(4uLL, v9, &v14);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Bu, 0LL);
    goto LABEL_14;
  }
  v12 = 4LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_14:
    v2 = v14;
    goto LABEL_5;
  }
  v13 = v14;
  v6 = 0;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v12);
  operator delete(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v13;
  a1[1] = v9;
LABEL_2:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * *a1) = *a2;
  v7 = a1[6];
  if ( v7 <= ++*a1 )
    v7 = *a1;
  a1[6] = v7;
LABEL_5:
  operator delete(v2);
  return v6;
}
