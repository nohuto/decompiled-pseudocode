/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180303F18
 * Callers:
 *     __lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator()_::_1_::dtor$1 @ 0x1800F08BD (__lambda_78c4d568eef31da123ac7a5ea8376aa4_--operator()_--_1_--dtor$1.c)
 *     __lambda_74683e00bb44ac1c285a2f54870ed16f_::operator()_::_1_::dtor$1 @ 0x18030400A (__lambda_74683e00bb44ac1c285a2f54870ed16f_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
