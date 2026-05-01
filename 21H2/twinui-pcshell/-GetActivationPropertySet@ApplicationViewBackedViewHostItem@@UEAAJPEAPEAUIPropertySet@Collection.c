/*
 * XREFs of ?GetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802C99D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::GetActivationPropertySet(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet **v2; // rbx

  *a2 = 0LL;
  v2 = (struct Windows::Foundation::Collections::IPropertySet **)((char *)this + 200);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 25);
  *a2 = *v2;
  return 0LL;
}
