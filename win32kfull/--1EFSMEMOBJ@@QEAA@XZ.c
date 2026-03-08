/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C0004A20
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00039E8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D4D0C (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C02E3290 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this, __int64 a2, __int64 a3)
{
  ULONG v4; // ecx

  if ( *(_QWORD *)this )
  {
    **((_DWORD **)this + 1) = *(_DWORD *)(*(_QWORD *)this + 64LL);
    v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v4 )
      EngSetLastError(v4);
    FreeTmpBuffer(*(_QWORD *)this, a2, a3);
  }
  else
  {
    **((_DWORD **)this + 1) = 0;
    EngSetLastError(0xEu);
  }
}
