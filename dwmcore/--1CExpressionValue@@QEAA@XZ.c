void __fastcall CExpressionValue::~CExpressionValue(CExpressionValue *this)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 8);
}
