/*
 * XREFs of ?ReleaseAllReferences@CParticleBehaviorsMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B880
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CParticleBehaviorsMarshaler::ReleaseAllReferences(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 10) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 11) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 12) = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 13) = 0LL;
  }
  v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
    *((_QWORD *)this + 14) = 0LL;
  }
  v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    *((_QWORD *)this + 15) = 0LL;
  }
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  if ( v13 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
    *((_QWORD *)this + 16) = 0LL;
  }
  v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v14 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
    *((_QWORD *)this + 17) = 0LL;
  }
}
