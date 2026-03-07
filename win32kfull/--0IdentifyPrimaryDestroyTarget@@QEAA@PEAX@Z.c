IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        void *a2)
{
  struct _HANDLEENTRY *v3; // rax

  *(_BYTE *)this = 0;
  v3 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a2);
  IdentifyPrimaryDestroyTarget::Identify(this, v3);
  return this;
}
