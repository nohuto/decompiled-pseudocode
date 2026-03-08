/*
 * XREFs of ??_E?$ValueReference@I@@UEAAPEAXI@Z @ 0x18028F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IReference@I@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18028EF00 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IReference@I@Foundati.c)
 */

void *__fastcall ValueReference<unsigned int>::`vector deleting destructor'(void *a1, char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
