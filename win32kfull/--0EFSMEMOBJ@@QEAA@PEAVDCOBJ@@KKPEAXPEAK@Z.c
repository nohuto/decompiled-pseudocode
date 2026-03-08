/*
 * XREFs of ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C0003C0C
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00039E8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D4D0C (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C02E3290 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

EFSMEMOBJ *__fastcall EFSMEMOBJ::EFSMEMOBJ(
        EFSMEMOBJ *this,
        struct DCOBJ *a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // r8d

  *((_QWORD *)this + 1) = a6;
  v8 = a3;
  if ( a3 > 0x1FFFFFF7 )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v10 = AllocFreeTmpBuffer(8 * a3 + 68);
    *(_QWORD *)this = v10;
    if ( v10 )
    {
      v11 = *a6;
      *(_QWORD *)(v10 + 40) = v10 + 68;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)this + 68LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)this + 8 * v8 + 68;
      **(_QWORD **)this = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 8LL) = a4;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 24LL) = v11;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = a2;
    }
  }
  return this;
}
