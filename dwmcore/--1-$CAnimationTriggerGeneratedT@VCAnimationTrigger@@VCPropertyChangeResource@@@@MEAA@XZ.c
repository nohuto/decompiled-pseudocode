/*
 * XREFs of ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x18001DC4C
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18001DA80 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCBaseExpression@@@CResource@@QEAAXPEAV?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@@Z @ 0x18001DCA4 (--$UnRegisterNotifiers@VCBaseExpression@@@CResource@@QEAAXPEAV-$vector@PEAVCBaseExpression@@V-$a.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifiers<CBaseExpression>((CResource *)this);
  if ( this[13] )
  {
    std::_Deallocate<16,0>(this[13], (this[15] - this[13]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[13] = 0LL;
    this[14] = 0LL;
    this[15] = 0LL;
  }
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
