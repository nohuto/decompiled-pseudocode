/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C0005020
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0003FE8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D3014 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C02E152C (-bGrow@EFSOBJ@@QEAAHXZ.c)
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
