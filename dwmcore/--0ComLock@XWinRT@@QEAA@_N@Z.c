/*
 * XREFs of ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x18028EB3C
 * Callers:
 *     ??0?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@U_GUID@@@1234@AEBU?$DefaultEqualityPredicate@U_GUID@@@1234@Upermission@01234@@Z @ 0x18028E36C (--0-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundation@W.c)
 *     ??0SplitIterator@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@PEAV12345@@Z @ 0x18028EC9C (--0SplitIterator@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall XWinRT::ComLock::ComLock(RTL_SRWLOCK *this)
{
  LODWORD(this->Ptr) = 0;
  InitializeSRWLock(this + 1);
  return this;
}
