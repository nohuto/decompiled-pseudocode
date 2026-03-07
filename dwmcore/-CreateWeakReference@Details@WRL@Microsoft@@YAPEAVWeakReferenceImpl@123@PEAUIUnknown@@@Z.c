struct Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::CreateWeakReference(
        struct IUnknown *this,
        struct IUnknown *a2)
{
  struct Microsoft::WRL::Details::WeakReferenceImpl *result; // rax

  result = (struct Microsoft::WRL::Details::WeakReferenceImpl *)DefaultHeap::Alloc(0x20uLL);
  if ( result )
    return Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(result, this);
  return result;
}
