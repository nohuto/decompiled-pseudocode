void __fastcall CRenderingTechniqueFragment::GetExternalImplementationId(
        CRenderingTechniqueFragment *this,
        struct _GUID *a2)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v4 + 64LL))(v4, *((unsigned int *)this + 4), a2);
}
