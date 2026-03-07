__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_1803E2E60 + 40LL))(
           qword_1803E2E60,
           *(unsigned int *)(a1 + 4),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
}
